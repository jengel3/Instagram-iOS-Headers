

@class NSString, UIColor;

@interface IGDirectInboxCellButtonConfig : NSObject {

	NSString* _primaryText;
	UIColor* _primaryTextColor;
	UIColor* _primaryBackgroundColor;
	NSString* _destructiveText;
	UIColor* _destructiveTextColor;
	UIColor* _destructiveBackgroundColor;

}

@property (nonatomic,readonly) NSString * primaryText;                            //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,readonly) UIColor * primaryTextColor;                        //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * primaryBackgroundColor;                  //@synthesize primaryBackgroundColor=_primaryBackgroundColor - In the implementation block
@property (nonatomic,readonly) NSString * destructiveText;                        //@synthesize destructiveText=_destructiveText - In the implementation block
@property (nonatomic,readonly) UIColor * destructiveTextColor;                    //@synthesize destructiveTextColor=_destructiveTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * destructiveBackgroundColor;              //@synthesize destructiveBackgroundColor=_destructiveBackgroundColor - In the implementation block
-(id)initWithPrimaryText:(id)arg1 primaryTextColor:(id)arg2 primaryBackgroundColor:(id)arg3 destructiveText:(id)arg4 destructiveTextColor:(id)arg5 destructiveBackgroundColor:(id)arg6 ;
-(id)initWithPrimaryText:(id)arg1 destructiveText:(id)arg2 ;
-(UIColor *)primaryBackgroundColor;
-(NSString *)destructiveText;
-(UIColor *)destructiveTextColor;
-(UIColor *)destructiveBackgroundColor;
-(NSString *)primaryText;
-(UIColor *)primaryTextColor;
@end

