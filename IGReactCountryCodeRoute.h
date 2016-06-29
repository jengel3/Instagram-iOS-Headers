
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/RCTBridgeModule.h>

@class NSNumber, NSString, RCTBridge;

@interface IGReactCountryCodeRoute : NSObject <IGCountryCodeViewControllerDelegate, RCTBridgeModule> {

	/*^block*/id _delegateCallback;
	NSNumber* _callbackReactTag;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__230;
+(void)load;
-(void)presentCountryCodeSelector:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
@end

