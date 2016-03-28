
#import <Instagram/IGTapButton.h>

@class NSString;

@interface IGChevronTitleButton : IGTapButton {

	char _isOpen;

}

@property (assign,nonatomic) char isOpen;                   //@synthesize isOpen=_isOpen - In the implementation block
@property (nonatomic,retain) NSString * title; 
+(id)button;
-(void)setIsOpen:(char)arg1 animated:(char)arg2 ;
-(void)setIsOpen:(char)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(char)isOpen;
@end

