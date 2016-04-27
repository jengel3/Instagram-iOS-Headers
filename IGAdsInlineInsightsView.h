
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGInsightsContentRowListViewDelegate;
@class IGInsightsContentRowListView, IGInsightsCenteredHeaderView, IGInsightsFunnelView, IGInsightsProgressView, IGInsightsLoggingHelper, NSString, UIActivityIndicatorView, IGFeedItem, NSNumberFormatter;

@interface IGAdsInlineInsightsView : UIView {

	IGInsightsContentRowListView* _educationView;
	IGInsightsCenteredHeaderView* _headerView;
	IGInsightsFunnelView* _funnelView;
	IGInsightsProgressView* _progressView;
	id<IGInsightsContentRowListViewDelegate> _educationUnitDelegate;
	IGInsightsLoggingHelper* _loggingHelper;
	NSString* _impressionString;
	NSString* _clicksString;
	UIActivityIndicatorView* _spinner;
	IGFeedItem* _feedItem;
	NSNumberFormatter* _commaNumberFormatter;

}

@property (nonatomic,retain) IGInsightsContentRowListView * educationView;                                       //@synthesize educationView=_educationView - In the implementation block
@property (nonatomic,retain) IGInsightsCenteredHeaderView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGInsightsFunnelView * funnelView;                                                  //@synthesize funnelView=_funnelView - In the implementation block
@property (nonatomic,retain) IGInsightsProgressView * progressView;                                              //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsContentRowListViewDelegate> educationUnitDelegate;              //@synthesize educationUnitDelegate=_educationUnitDelegate - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                            //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,copy,readonly) NSString * impressionString;                                                 //@synthesize impressionString=_impressionString - In the implementation block
@property (nonatomic,copy,readonly) NSString * clicksString;                                                     //@synthesize clicksString=_clicksString - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                  //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * commaNumberFormatter;                                           //@synthesize commaNumberFormatter=_commaNumberFormatter - In the implementation block
-(NSNumberFormatter *)commaNumberFormatter;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)initializeCommaNumberFormatter;
-(void)setCommaNumberFormatter:(NSNumberFormatter *)arg1 ;
-(void)initializeStrings;
-(void)hideContentViews;
-(IGInsightsFunnelView *)funnelView;
-(void)setupSeparators;
-(NSString *)clicksString;
-(id)getPostedOnString;
-(void)showContentViews;
-(void)setFunnelView:(IGInsightsFunnelView *)arg1 ;
-(void)initializeEducationView;
-(void)initializeSpinner;
-(IGInsightsContentRowListView *)educationView;
-(void)setEducationView:(IGInsightsContentRowListView *)arg1 ;
-(id<IGInsightsContentRowListViewDelegate>)educationUnitDelegate;
-(id)initWithFeedItem:(id)arg1 educationUnitDelegate:(id)arg2 loggingHelper:(id)arg3 ;
-(void)queryFailureHandleError:(id)arg1 ;
-(void)setEducationUnitDelegate:(id<IGInsightsContentRowListViewDelegate>)arg1 ;
-(NSString *)impressionString;
-(void)updateWithAdsInlineInsightsModel:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IGInsightsCenteredHeaderView *)headerView;
-(void)setHeaderView:(IGInsightsCenteredHeaderView *)arg1 ;
-(void)setProgressView:(IGInsightsProgressView *)arg1 ;
-(IGInsightsProgressView *)progressView;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

