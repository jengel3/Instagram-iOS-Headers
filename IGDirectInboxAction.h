

@class NSString, UIColor;

@interface IGDirectInboxAction : NSObject {

	NSString* _title;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) id actionBlock;                    //@synthesize actionBlock=_actionBlock - In the implementation block
+(id)deleteActionWithBlock:(/*^block*/id)arg1 ;
+(id)muteActionWithIsMuted:(char)arg1 actionBlock:(/*^block*/id)arg2 ;
-(id)initWithTitle:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 actionBlock:(/*^block*/id)arg4 ;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIColor *)textColor;
-(id)actionBlock;
@end

