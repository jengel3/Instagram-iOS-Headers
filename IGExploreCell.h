
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGExploreCellDelegate;
@class IGExploreViewModel, UILabel, IGProfilePictureImageView, NSArray, UIView, IGExploreEmptyView, UIImageView;

@interface IGExploreCell : UICollectionViewCell {

	id<IGExploreCellDelegate> _delegate;
	IGExploreViewModel* _viewModel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGProfilePictureImageView* _imageView;
	UILabel* _bylineLabel;
	NSArray* _thumbnailViews;
	UIView* _thumbnailOverlayView;
	UIView* _actionView;
	IGExploreEmptyView* _emptyView;
	unsigned _action;
	UIImageView* _verifiedImageView;

}

@property (assign,nonatomic,__weak) id<IGExploreCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) IGExploreViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * bylineLabel;                                  //@synthesize bylineLabel=_bylineLabel - In the implementation block
@property (nonatomic,retain) NSArray * thumbnailViews;                               //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,retain) UIView * thumbnailOverlayView;                          //@synthesize thumbnailOverlayView=_thumbnailOverlayView - In the implementation block
@property (nonatomic,retain) UIView * actionView;                                    //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) IGExploreEmptyView * emptyView;                         //@synthesize emptyView=_emptyView - In the implementation block
@property (assign,nonatomic) unsigned action;                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedImageView;                        //@synthesize verifiedImageView=_verifiedImageView - In the implementation block
+(float)leftRightPaddingForWidth:(float)arg1 ;
+(float)avatarHeightForWidth:(float)arg1 ;
+(float)thumbnailHeightForWidth:(float)arg1 ;
+(id)bylineFont;
+(float)heightWithConstrainedWidth:(float)arg1 exploreViewModel:(id)arg2 ;
+(CGSize)thumbnailSizeForWidth:(float)arg1 ;
-(void)setFollowingVisible:(char)arg1 animated:(char)arg2 ;
-(NSArray *)thumbnailViews;
-(void)setThumbnailViews:(NSArray *)arg1 ;
-(UILabel *)bylineLabel;
-(IGExploreEmptyView *)emptyView;
-(void)onFollowButton:(id)arg1 ;
-(void)onFollowingButton:(id)arg1 ;
-(void)onDismissButton:(id)arg1 ;
-(UIView *)thumbnailOverlayView;
-(void)onTapThumbnail:(id)arg1 ;
-(void)setExploreViewModel:(id)arg1 ;
-(void)setBylineLabel:(UILabel *)arg1 ;
-(void)setThumbnailOverlayView:(UIView *)arg1 ;
-(void)setEmptyView:(IGExploreEmptyView *)arg1 ;
-(IGExploreViewModel *)viewModel;
-(void)setViewModel:(IGExploreViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGExploreCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGExploreCellDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)action;
-(id)accessibilityLabel;
-(UILabel *)titleLabel;
-(void)setAction:(unsigned)arg1 ;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(IGProfilePictureImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)accessibilityHint;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIView *)actionView;
-(void)setImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setActionView:(UIView *)arg1 ;
-(UIImageView *)verifiedImageView;
-(void)setVerifiedImageView:(UIImageView *)arg1 ;
@end

