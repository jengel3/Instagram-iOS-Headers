
#import <Instagram/SKPaymentTransactionObserver.h>

@class NSString;

@interface FBSDKPaymentObserver : NSObject <SKPaymentTransactionObserver> {

	char _observingTransactions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startObservingTransactions;
+(void)stopObservingTransactions;
+(id)singleton;
-(void)startObservingTransactions;
-(void)stopObservingTransactions;
-(void)handleTransaction:(id)arg1 ;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(id)init;
@end

