
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGFeedItemHeader;

@interface IGEventViewerFeedHeaderCell : UICollectionViewCell {

	IGFeedItemHeader* _headerView;

}

@property (nonatomic,readonly) IGFeedItemHeader * headerView;              //@synthesize headerView=_headerView - In the implementation block
-(void)setUpHeaderViewWithFrame:(CGRect)arg1 ;
-(void)configureWithFeedItem:(id)arg1 headerViewDelegate:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGFeedItemHeader *)headerView;
@end

