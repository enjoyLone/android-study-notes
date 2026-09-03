package com.example.nativectest

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.nativectest.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // Example of a call to a native method
        binding.sampleText.text = CryptoUtils.add(5, 6)
    }


    companion object {
        // Used to load the 'nativectest' library on application startup.
        init {
            System.loadLibrary("crypto_key")
        }
    }
}