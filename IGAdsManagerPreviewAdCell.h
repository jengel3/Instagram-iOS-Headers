
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewCell.h>

@class IGMediaThumbnailView, NSURL;

@interface IGAdsManagerPreviewAdCell : IGGroupedTableViewCell {

	IGMediaThumbnailView* _thumbnailView;

}

@property (nonatomic,readonly) IGMediaThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) NSURL * imageURL; 
-(CGRect)layoutForThumbnail;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(IGMediaThumbnailView *)thumbnailView;
-(void)setUp;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

