

@class UIImage;

@interface IGDirectShareHeaderViewLayout : NSObject {

	char _shouldShowUserProfile;
	float _sideImageWidth;
	float _sideImageHeight;
	float _sideImageHorizontalPadding;
	float _sideImageVerticalPadding;
	UIImage* _iconImage;

}

@property (assign,nonatomic) float sideImageWidth;                          //@synthesize sideImageWidth=_sideImageWidth - In the implementation block
@property (assign,nonatomic) float sideImageHeight;                         //@synthesize sideImageHeight=_sideImageHeight - In the implementation block
@property (assign,nonatomic) float sideImageHorizontalPadding;              //@synthesize sideImageHorizontalPadding=_sideImageHorizontalPadding - In the implementation block
@property (assign,nonatomic) float sideImageVerticalPadding;                //@synthesize sideImageVerticalPadding=_sideImageVerticalPadding - In the implementation block
@property (assign,nonatomic) char shouldShowUserProfile;                    //@synthesize shouldShowUserProfile=_shouldShowUserProfile - In the implementation block
@property (assign,nonatomic) UIImage * iconImage;                           //@synthesize iconImage=_iconImage - In the implementation block
+(id)shareHeaderViewConfigProfileStyle;
+(id)shareHeaderViewConfigPostStyle;
+(id)shareHeaderViewConfigLocationStyle;
+(id)shareHeaderViewConfigHashTagStyle;
-(float)sideImageWidth;
-(float)sideImageHorizontalPadding;
-(float)sideImageVerticalPadding;
-(char)shouldShowUserProfile;
-(float)sideImageHeight;
-(void)setSideImageWidth:(float)arg1 ;
-(void)setSideImageHeight:(float)arg1 ;
-(void)setSideImageHorizontalPadding:(float)arg1 ;
-(void)setSideImageVerticalPadding:(float)arg1 ;
-(void)setShouldShowUserProfile:(char)arg1 ;
-(id)initWithSideImageWidth:(float)arg1 sideImageHeight:(float)arg2 sideImageHorizontalPadding:(float)arg3 sideImageVerticalPadding:(float)arg4 shouldShowUserProfile:(char)arg5 iconImage:(id)arg6 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)description;
-(UIImage *)iconImage;
@end

