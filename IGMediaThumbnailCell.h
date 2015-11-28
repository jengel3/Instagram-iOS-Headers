
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGMediaThumbnailView, UIView;

@interface IGMediaThumbnailCell : UICollectionViewCell {

	char _showHighlight;
	IGMediaThumbnailView* _thumbnailView;
	UIView* _highlightView;

}

@property (nonatomic,retain) IGMediaThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) char showHighlight;                                //@synthesize showHighlight=_showHighlight - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                            //@synthesize highlightView=_highlightView - In the implementation block
-(void)setImageURL:(id)arg1 isVideo:(char)arg2 synchronous:(char)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
-(void)setThumbnailView:(IGMediaThumbnailView *)arg1 ;
-(IGMediaThumbnailView *)thumbnailView;
-(void)setShowHighlight:(char)arg1 ;
-(char)showHighlight;
@end

