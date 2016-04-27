
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGFeedItemHiddenConfirmationCellDelegate;
@class IGTombstoneView;

@interface IGFeedItemHiddenConfirmationCell : UICollectionViewCell {

	id<IGFeedItemHiddenConfirmationCellDelegate> _delegate;
	IGTombstoneView* _tombstoneView;

}

@property (assign,nonatomic,__weak) id<IGFeedItemHiddenConfirmationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGTombstoneView * tombstoneView;                                           //@synthesize tombstoneView=_tombstoneView - In the implementation block
+(float)heightForReportType:(int)arg1 ;
-(void)configureForTombstoneReportType:(int)arg1 ;
-(IGTombstoneView *)tombstoneView;
-(void)setTombstoneView:(IGTombstoneView *)arg1 ;
-(void)didTapShowPostButton;
-(void)didTapDismissButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemHiddenConfirmationCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemHiddenConfirmationCellDelegate>)delegate;
@end

