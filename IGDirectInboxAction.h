

@class NSString, UIColor;

@interface IGDirectInboxAction : NSObject {

	NSString* _title;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	/*^block*/id _tapBlock;

}

@property (assign,nonatomic) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) id tapBlock;                              //@synthesize tapBlock=_tapBlock - In the implementation block
-(id)tapBlock;
-(id)initWithTitle:(id)arg1 andBackgroundColor:(id)arg2 andTextColor:(id)arg3 andTapBlock:(/*^block*/id)arg4 ;
-(void)setTapBlock:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
@end

