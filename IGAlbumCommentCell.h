
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGAlbumCommentContentView;

@interface IGAlbumCommentCell : UICollectionViewCell {

	IGAlbumCommentContentView* _commentView;

}

@property (nonatomic,readonly) IGAlbumCommentContentView * commentView;              //@synthesize commentView=_commentView - In the implementation block
-(IGAlbumCommentContentView *)commentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

