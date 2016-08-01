
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, IGAlbumGradientRingView, UILabel, CAShapeLayer, UIImageView;

@interface IGAlbumTrayCell : UICollectionViewCell {

	char _isCurrentUserReel;
	char _seen;
	char _showError;
	IGProfilePictureImageView* _profileImageView;
	IGAlbumGradientRingView* _gradientRingView;
	UILabel* _titleLabel;
	CAShapeLayer* _overlayLayer;
	UIImageView* _errorImageView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * overlayLayer;                               //@synthesize overlayLayer=_overlayLayer - In the implementation block
@property (nonatomic,readonly) UIImageView * errorImageView;                              //@synthesize errorImageView=_errorImageView - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,readonly) char isCurrentUserReel;                                    //@synthesize isCurrentUserReel=_isCurrentUserReel - In the implementation block
@property (nonatomic,readonly) char seen;                                                 //@synthesize seen=_seen - In the implementation block
@property (nonatomic,readonly) IGAlbumGradientRingView * gradientRingView;                //@synthesize gradientRingView=_gradientRingView - In the implementation block
@property (assign,nonatomic) char showError;                                              //@synthesize showError=_showError - In the implementation block
+(CGSize)preferredCellSize;
-(char)isCurrentUserReel;
-(char)seen;
-(IGAlbumGradientRingView *)gradientRingView;
-(IGProfilePictureImageView *)profileImageView;
-(UIImageView *)errorImageView;
-(CAShapeLayer *)overlayLayer;
-(void)popCellWithDuration:(float)arg1 delay:(float)arg2 completion:(/*^block*/id)arg3 ;
-(void)configureWithUser:(id)arg1 seen:(char)arg2 isCurrentUserReel:(char)arg3 ;
-(void)setShowError:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(char)showError;
-(void)setLoading:(char)arg1 ;
-(void)updateStyle;
@end

