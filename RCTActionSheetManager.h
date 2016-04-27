
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSMapTable, NSString;

@interface RCTActionSheetManager : NSObject <UIActionSheetDelegate, RCTBridgeModule> {

	NSMapTable* _callbacks;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__520;
+(id)__rct_export__1531;
+(void)load;
-(CGRect)sourceRectInView:(id)arg1 anchorViewTag:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)showActionSheetWithOptions:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)showShareActionSheetWithOptions:(id)arg1 failureCallback:(/*^block*/id)arg2 successCallback:(/*^block*/id)arg3 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end

