
#import <UIKit/UITableViewCell.h>
#import <Instagram/IGInsightsDataProviderDelegate.h>

@class IGImageView, UILabel, IGInsightsDataProvider, IGInsightsCollectionViewMediaCell, NSString;

@interface IGInsightsSeeAllPostsSwitchPostTypeCell : UITableViewCell <IGInsightsDataProviderDelegate> {

	IGImageView* _sampleImageView;
	UILabel* _titleLabel;
	IGInsightsDataProvider* _mediaBundleDataProvider;
	IGInsightsCollectionViewMediaCell* _cell;

}

@property (nonatomic,readonly) IGImageView * sampleImageView;                               //@synthesize sampleImageView=_sampleImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * mediaBundleDataProvider;              //@synthesize mediaBundleDataProvider=_mediaBundleDataProvider - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionViewMediaCell * cell;                      //@synthesize cell=_cell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchFeedItemsFromMediaIDs:(id)arg1 ;
-(void)updateViewWithMediaBundle:(id)arg1 ;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)failedToGetAccessTokenForDataProvider:(id)arg1 ;
-(IGInsightsDataProvider *)mediaBundleDataProvider;
-(void)setMediaBundleDataProvider:(IGInsightsDataProvider *)arg1 ;
-(id)initWithSampleImageMediaID:(id)arg1 title:(id)arg2 ;
-(IGImageView *)sampleImageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(IGInsightsCollectionViewMediaCell *)cell;
-(void)setCell:(IGInsightsCollectionViewMediaCell *)arg1 ;
@end

