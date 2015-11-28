
#import <Instagram/IGTapButton.h>

@class NSString;

@interface IGNuxButton : IGTapButton {

	char _expanded;
	float _size;
	float _maxWidth;
	float _imageInset;
	float _titleInset;
	NSString* _title;

}

@property (assign,nonatomic) float size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float maxWidth;                //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) float imageInset;              //@synthesize imageInset=_imageInset - In the implementation block
@property (assign,nonatomic) float titleInset;              //@synthesize titleInset=_titleInset - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)buttonWithSize:(float)arg1 ;
-(void)setImageInset:(float)arg1 ;
-(void)setTitleInset:(float)arg1 ;
-(void)showTextLabelWithAnimation:(char)arg1 duration:(float)arg2 delay:(float)arg3 ;
-(void)shrinkToIconWithAnimation:(char)arg1 duration:(float)arg2 delay:(float)arg3 ;
-(void)updateInsets;
-(float)imageInset;
-(float)titleInset;
-(float)size;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSize:(float)arg1 ;
-(void)sizeToFit;
-(void)removeAllAnimations;
-(id)initWithSize:(float)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned)arg2 ;
-(float)maxWidth;
-(void)setMaxWidth:(float)arg1 ;
@end

