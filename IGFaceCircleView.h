
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIImageView.h>

@class IGUsertag;

@interface IGFaceCircleView : UIImageView {

	char _isScaledDown;
	IGUsertag* _usertag;
	CGRect _faceRect;

}

@property (assign,nonatomic) CGRect faceRect;                  //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,retain) IGUsertag * usertag;              //@synthesize usertag=_usertag - In the implementation block
@property (assign,nonatomic) char isScaledDown;                //@synthesize isScaledDown=_isScaledDown - In the implementation block
-(IGUsertag *)usertag;
-(void)setUsertag:(IGUsertag *)arg1 ;
-(void)shrink:(char)arg1 animated:(char)arg2 ;
-(char)isScaledDown;
-(void)setIsScaledDown:(char)arg1 ;
-(id)initWithFaceRect:(CGRect)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

