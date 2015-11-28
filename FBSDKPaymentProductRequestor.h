
#import <Instagram/SKProductsRequestDelegate.h>

@class SKPaymentTransaction, SKProductsRequest, NSString;

@interface FBSDKPaymentProductRequestor : NSObject <SKProductsRequestDelegate> {

	SKPaymentTransaction* _transaction;
	SKProductsRequest* _productRequest;

}

@property (nonatomic,retain) SKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) SKProductsRequest * productRequest;              //@synthesize productRequest=_productRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)resolveProducts;
-(void)setProductRequest:(SKProductsRequest *)arg1 ;
-(SKProductsRequest *)productRequest;
-(id)getTruncatedString:(id)arg1 ;
-(void)logImplicitPurchaseEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 ;
-(void)logTransactionEvent:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(SKPaymentTransaction *)transaction;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)cleanUp;
-(void)setTransaction:(SKPaymentTransaction *)arg1 ;
@end

