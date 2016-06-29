
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGInsightsCollectionViewCell.h>

@class IGMediaThumbnailView, UILabel, UIImageView;

@interface IGInsightsCollectionViewMediaCell : IGInsightsCollectionViewCell {

	IGMediaThumbnailView* _thumbnailView;
	UILabel* _label;
	UIImageView* _shadeView;

}

@property (nonatomic,readonly) IGMediaThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * shadeView;                           //@synthesize shadeView=_shadeView - In the implementation block
-(void)updateCellWithThumbnailURL:(id)arg1 isVideo:(char)arg2 ;
-(UIImageView *)shadeView;
-(void)layoutShade;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(IGMediaThumbnailView *)thumbnailView;
@end

