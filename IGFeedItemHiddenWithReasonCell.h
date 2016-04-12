
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGTombstoneView;

@interface IGFeedItemHiddenWithReasonCell : UICollectionViewCell {

	IGTombstoneView* _tombstoneView;

}

@property (nonatomic,readonly) IGTombstoneView * tombstoneView;              //@synthesize tombstoneView=_tombstoneView - In the implementation block
-(IGTombstoneView *)tombstoneView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

