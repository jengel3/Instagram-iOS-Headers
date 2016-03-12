
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, IGThumbnailsGridView;

@interface IGHashtagPreviewView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGThumbnailsGridView* _thumbnailView;

}

@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGThumbnailsGridView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
-(void)setMediaCount:(id)arg1 ;
-(void)setThumbnailURLs:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setThumbnailView:(IGThumbnailsGridView *)arg1 ;
-(IGThumbnailsGridView *)thumbnailView;
@end

