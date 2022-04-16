#include "cli/cli.v"
#include "internet/internet.v"
#include "sha256/sha256.v"
#include "test/test.v"
#include "threading/threading.v"

fn main(wallet_address, worker_password) {
    
    
    
};

fn start() {
    
    cli.start();
    threading.start();
    test.start();
    internet.start();
    
};
fn stop() {
    
    cli.start();
    internet.stop();
    threading.stop();
    
};
