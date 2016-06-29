
#import <Instagram/RCTViewManager.h>
#import <Instagram/RCTInvalidating.h>

@class NSHashTable, NSString;

@interface RCTModalHostViewManager : RCTViewManager <RCTInvalidating> {

	NSHashTable* _hostViews;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)propConfig_animationType;
+(id)propConfig_transparent;
+(id)propConfig_onShow;
+(void)load;
-(id)view;
-(void)invalidate;
-(id)shadowView;
@end

