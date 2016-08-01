
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class UIView, IGDirectShareHeaderView, IGShareThumbnailView, NSArray;

@interface IGDirectGenericShareContentCell : IGDirectContentCell {

	UIView* _shareContainerView;
	IGDirectShareHeaderView* _headerView;
	IGShareThumbnailView* _thumbnailViews;
	NSArray* _previewMediaPhotos;

}

@property (nonatomic,retain) IGDirectShareHeaderView * headerView;               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGShareThumbnailView * thumbnailViews;              //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,retain) NSArray * previewMediaPhotos;                       //@synthesize previewMediaPhotos=_previewMediaPhotos - In the implementation block
@property (nonatomic,retain) UIView * shareContainerView;                        //@synthesize shareContainerView=_shareContainerView - In the implementation block
+(float)thumbnailWidthForFrameWidth:(float)arg1 ;
+(float)heightForShare:(id)arg1 width:(float)arg2 layout:(id)arg3 ;
+(float)cellWidthForFrameWidth:(float)arg1 ;
-(id)createShareContainerView;
-(float)cellOffsetX:(float)arg1 ;
-(UIView *)shareContainerView;
-(void)layoutBubble:(float)arg1 width:(float)arg2 ;
-(void)layoutThumbnailView:(float)arg1 offsetX:(float)arg2 width:(float)arg3 ;
-(NSArray *)previewMediaPhotos;
-(IGShareThumbnailView *)thumbnailViews;
-(void)setPreviewMediaPhotos:(NSArray *)arg1 ;
-(void)setHeaderLayout:(id)arg1 ;
-(void)setShareContainerView:(UIView *)arg1 ;
-(void)setThumbnailViews:(IGShareThumbnailView *)arg1 ;
-(CGRect)tapTargetFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(IGDirectShareHeaderView *)headerView;
-(void)setHeaderView:(IGDirectShareHeaderView *)arg1 ;
-(void)setContent:(id)arg1 ;
@end

