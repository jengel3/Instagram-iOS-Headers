
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSDictionary, NSString;

@interface RCTAccessibilityManager : NSObject <RCTBridgeModule> {

	char _isVoiceOverEnabled;
	RCTBridge* _bridge;
	NSDictionary* _multipliers;
	float _multiplier;
	NSString* _contentSizeCategory;

}

@property (nonatomic,copy) NSString * contentSizeCategory;                            //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) float multiplier;                                        //@synthesize multiplier=_multiplier - In the implementation block
@property (nonatomic,copy) NSDictionary * multipliers;                                //@synthesize multipliers=_multipliers - In the implementation block
@property (assign,nonatomic) char isVoiceOverEnabled;                                 //@synthesize isVoiceOverEnabled=_isVoiceOverEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)JSToUIKitMap;
+(id)UIKitCategoryFromJSCategory:(id)arg1 ;
+(id)__rct_export__1540;
+(id)__rct_export__1651;
+(id)__rct_export__1732;
+(void)load;
-(void)didReceiveNewContentSizeCategory:(id)arg1 ;
-(void)didReceiveNewVoiceOverStatus:(id)arg1 ;
-(void)invalidateMultiplier;
-(float)multiplierForContentSizeCategory:(id)arg1 ;
-(void)setAccessibilityContentSizeMultipliers:(id)arg1 ;
-(void)getMultiplier:(/*^block*/id)arg1 ;
-(void)getCurrentVoiceOverState:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(char)isVoiceOverEnabled;
-(void)setIsVoiceOverEnabled:(char)arg1 ;
-(void)setMultiplier:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(float)multiplier;
-(RCTBridge *)bridge;
-(void)setMultipliers:(NSDictionary *)arg1 ;
-(NSDictionary *)multipliers;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
@end

