

@class NSString, UIColor;

@interface IGAYMFBannerViewModel : NSObject {

	NSString* _title;
	UIColor* _titleColor;
	NSString* _disclosure;
	NSString* _accessibilityLabel;
	int _indicatorType;

}

@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor;                       //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) NSString * disclosure;                      //@synthesize disclosure=_disclosure - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) int indicatorType;                          //@synthesize indicatorType=_indicatorType - In the implementation block
+(id)defaultBannerWithIndicatorType:(int)arg1 ;
-(id)initWithTitle:(id)arg1 titleColor:(id)arg2 disclosure:(id)arg3 accessibilityLabel:(id)arg4 indicatorType:(int)arg5 ;
-(NSString *)disclosure;
-(int)indicatorType;
-(NSString *)title;
-(NSString *)accessibilityLabel;
-(UIColor *)titleColor;
@end

