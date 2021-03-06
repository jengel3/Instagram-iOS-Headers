

@class NSString, UIColor, NSURL;

@interface IGMegaphoneButton : NSObject {

	NSString* _text;
	int _style;
	UIColor* _backgroundColor;
	UIColor* _borderColor;
	UIColor* _textColor;
	NSString* _action;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) int style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) NSString * action;                      //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSURL * url;                            //@synthesize url=_url - In the implementation block
+(id)buttonForDictionary:(id)arg1 ;
-(id)initWithText:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3 borderColor:(id)arg4 textColor:(id)arg5 action:(id)arg6 ;
-(id)initWithText:(id)arg1 style:(int)arg2 url:(id)arg3 action:(id)arg4 ;
-(id)initWithText:(id)arg1 url:(id)arg2 action:(id)arg3 ;
-(UIColor *)backgroundColor;
-(NSURL *)url;
-(NSString *)action;
-(NSString *)text;
-(int)style;
-(UIColor *)textColor;
-(UIColor *)borderColor;
@end

