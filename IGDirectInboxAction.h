

@class NSString, UIColor;

@interface IGDirectInboxAction : NSObject {

	NSString* _title;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	/*^block*/id _tapBlock;

}

@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) id tapBlock;                       //@synthesize tapBlock=_tapBlock - In the implementation block
-(id)tapBlock;
-(id)initWithTitle:(id)arg1 andBackgroundColor:(id)arg2 andTextColor:(id)arg3 andTapBlock:(/*^block*/id)arg4 ;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIColor *)textColor;
@end

