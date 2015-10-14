/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL, UIColor, IGMegaphoneButton;

@interface IGGenericMegaphone : NSObject {

	char _dismissible;
	NSString* _type;
	NSURL* _iconURL;
	UIColor* _backgroundColor;
	UIColor* _dismissButtonColor;
	NSString* _title;
	UIColor* _titleColor;
	NSString* _message;
	UIColor* _messageColor;
	IGMegaphoneButton* _buttonOne;
	IGMegaphoneButton* _buttonTwo;
	int _buttonLocation;

}

@property (nonatomic,copy) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                              //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) char dismissible;                           //@synthesize dismissible=_dismissible - In the implementation block
@property (nonatomic,retain) UIColor * dismissButtonColor;               //@synthesize dismissButtonColor=_dismissButtonColor - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                       //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIColor * messageColor;                     //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,retain) IGMegaphoneButton * buttonOne;              //@synthesize buttonOne=_buttonOne - In the implementation block
@property (nonatomic,retain) IGMegaphoneButton * buttonTwo;              //@synthesize buttonTwo=_buttonTwo - In the implementation block
@property (assign,nonatomic) int buttonLocation;                         //@synthesize buttonLocation=_buttonLocation - In the implementation block
+(id)megaphoneFromDictionary:(id)arg1 ;
+(id)colorFromString:(id)arg1 ;
-(char)dismissible;
-(void)setDismissible:(char)arg1 ;
-(void)setButtonOne:(IGMegaphoneButton *)arg1 ;
-(void)setMessageColor:(UIColor *)arg1 ;
-(void)setDismissButtonColor:(UIColor *)arg1 ;
-(void)setButtonTwo:(IGMegaphoneButton *)arg1 ;
-(void)setButtonLocation:(int)arg1 ;
-(UIColor *)dismissButtonColor;
-(UIColor *)messageColor;
-(IGMegaphoneButton *)buttonOne;
-(IGMegaphoneButton *)buttonTwo;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)title;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setIconURL:(NSURL *)arg1 ;
-(NSURL *)iconURL;
-(int)buttonLocation;
@end

