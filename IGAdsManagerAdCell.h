
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class IGAdViewModel, UILabel, IGMediaThumbnailView, UIImageView;

@interface IGAdsManagerAdCell : UITableViewCell {

	IGAdViewModel* _viewModel;
	UILabel* _title;
	UILabel* _subtitle;
	IGMediaThumbnailView* _thumbnailView;
	UIImageView* _rightArrow;

}

@property (nonatomic,readonly) UILabel * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) IGMediaThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,readonly) UIImageView * rightArrow;                          //@synthesize rightArrow=_rightArrow - In the implementation block
@property (nonatomic,retain) IGAdViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
-(void)setUpViewHierarchy;
-(void)setUpTitle;
-(void)setUpSubtitle;
-(void)setUpRightArrow;
-(void)setUpThumbnailView;
-(CGRect)layoutForThumbnail;
-(float)topBottomMarginWithTitleSize:(CGSize)arg1 subtitleSize:(CGSize)arg2 ;
-(CGRect)layoutForTitleWithThumbnailRect:(CGRect)arg1 topMargin:(float)arg2 ;
-(CGRect)layoutForSubtitleWithThumbnailRect:(CGRect)arg1 bottomMargin:(float)arg2 ;
-(UIImageView *)rightArrow;
-(IGAdViewModel *)viewModel;
-(void)setViewModel:(IGAdViewModel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)title;
-(UILabel *)subtitle;
-(IGMediaThumbnailView *)thumbnailView;
@end

