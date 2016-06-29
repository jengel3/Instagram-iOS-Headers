
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class SKStoreProductViewController, NSDictionary, NSString;

@interface IGStoreProductSession : NSObject <SKStoreProductViewControllerDelegate> {

	int _status;
	SKStoreProductViewController* _productVC;
	NSDictionary* _parameters;

}

@property (nonatomic,retain) SKStoreProductViewController * productVC;              //@synthesize productVC=_productVC - In the implementation block
@property (assign,nonatomic) int status;                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProductVC:(SKStoreProductViewController *)arg1 ;
-(SKStoreProductViewController *)productVC;
-(void)presentWithViewController:(id)arg1 ;
-(id)storeViewController;
-(void)dealloc;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)loadProductWithParameters:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

