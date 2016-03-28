

@class UIColor, NSString;

@interface IGHybridWebViewHeaderViewConfig : NSObject {

	UIColor* _headerColor;
	NSString* _headerTitle;
	UIColor* _rightButtonActiveColor;
	UIColor* _rightButtonInactiveColor;

}

@property (nonatomic,readonly) UIColor * headerColor;                           //@synthesize headerColor=_headerColor - In the implementation block
@property (nonatomic,readonly) NSString * headerTitle;                          //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) UIColor * rightButtonActiveColor;                //@synthesize rightButtonActiveColor=_rightButtonActiveColor - In the implementation block
@property (nonatomic,readonly) UIColor * rightButtonInactiveColor;              //@synthesize rightButtonInactiveColor=_rightButtonInactiveColor - In the implementation block
-(UIColor *)headerColor;
-(UIColor *)rightButtonActiveColor;
-(UIColor *)rightButtonInactiveColor;
-(id)initWithContext:(unsigned)arg1 ;
-(NSString *)headerTitle;
@end

