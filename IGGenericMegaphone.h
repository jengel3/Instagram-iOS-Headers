

@class NSString, IGMegaphoneButton, NSURL, UIColor, NSDictionary, UIImage;

@interface IGGenericMegaphone : NSObject {

	char _dismissible;
	NSString* _title;
	NSString* _message;
	int _megaphoneType;
	int _buttonLayout;
	IGMegaphoneButton* _buttonOne;
	IGMegaphoneButton* _buttonTwo;
	NSString* _type;
	NSString* _uuid;
	NSURL* _iconURL;
	UIColor* _backgroundColor;
	UIColor* _dismissButtonColor;
	UIColor* _titleColor;
	UIColor* _messageColor;
	NSDictionary* _actionInfo;
	UIImage* _sideImage;
	float _imageTopPadding;

}

@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) char dismissible;                           //@synthesize dismissible=_dismissible - In the implementation block
@property (nonatomic,readonly) int megaphoneType;                          //@synthesize megaphoneType=_megaphoneType - In the implementation block
@property (nonatomic,readonly) int buttonLayout;                           //@synthesize buttonLayout=_buttonLayout - In the implementation block
@property (nonatomic,readonly) IGMegaphoneButton * buttonOne;              //@synthesize buttonOne=_buttonOne - In the implementation block
@property (nonatomic,readonly) IGMegaphoneButton * buttonTwo;              //@synthesize buttonTwo=_buttonTwo - In the implementation block
@property (nonatomic,readonly) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSURL * iconURL;                            //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * dismissButtonColor;               //@synthesize dismissButtonColor=_dismissButtonColor - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor;                       //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) UIColor * messageColor;                     //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionInfo;                  //@synthesize actionInfo=_actionInfo - In the implementation block
@property (nonatomic,retain) UIImage * sideImage;                          //@synthesize sideImage=_sideImage - In the implementation block
@property (assign,nonatomic) float imageTopPadding;                        //@synthesize imageTopPadding=_imageTopPadding - In the implementation block
+(id)megaphoneFromDictionary:(id)arg1 ;
-(char)dismissible;
-(id)initWithTitle:(id)arg1 message:(id)arg2 dismissible:(char)arg3 type:(id)arg4 iconURL:(id)arg5 backgroundColor:(id)arg6 dismissButtonColor:(id)arg7 titleColor:(id)arg8 messageColor:(id)arg9 buttonOne:(id)arg10 buttonTwo:(id)arg11 uuid:(id)arg12 actionInfo:(id)arg13 megaphoneType:(int)arg14 buttonLayout:(int)arg15 ;
-(int)megaphoneType;
-(void)setSideImage:(UIImage *)arg1 ;
-(void)setImageTopPadding:(float)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 dismissible:(char)arg3 buttonOne:(id)arg4 ;
-(int)buttonLayout;
-(IGMegaphoneButton *)buttonOne;
-(IGMegaphoneButton *)buttonTwo;
-(UIColor *)dismissButtonColor;
-(UIImage *)sideImage;
-(float)imageTopPadding;
-(UIColor *)messageColor;
-(UIColor *)backgroundColor;
-(NSString *)type;
-(NSString *)title;
-(NSString *)message;
-(UIColor *)titleColor;
-(NSString *)uuid;
-(NSDictionary *)actionInfo;
-(NSURL *)iconURL;
@end

