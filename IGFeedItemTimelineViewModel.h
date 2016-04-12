

@protocol IGFeedItemConfigurationType;
@class IGFeedItem, NSArray;

@interface IGFeedItemTimelineViewModel : NSObject {

	IGFeedItem* _feedItem;
	id<IGFeedItemConfigurationType> _configuration;
	NSArray* _rowItems;
	NSArray* _textRowItems;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                      //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSArray * rowItems;                                         //@synthesize rowItems=_rowItems - In the implementation block
@property (nonatomic,readonly) NSArray * textRowItems;                                     //@synthesize textRowItems=_textRowItems - In the implementation block
-(IGFeedItem *)feedItem;
-(int)feedItemCellTypeForRow:(int)arg1 ;
-(id)initWithFeedItem:(id)arg1 configuration:(id)arg2 ;
-(id)commentForTextTimelineRow:(int)arg1 ;
-(int)cellTypeForTextTimelineRow:(int)arg1 ;
-(int)numberOfFeedCellsBeforeComments;
-(int)numberOfTextRowsInTimeline;
-(char)shouldShowTimestamp;
-(char)shouldShowInsights;
-(char)shouldShowPivotGrid;
-(NSArray *)textRowItems;
-(int)totalNumberOfRows;
-(id<IGFeedItemConfigurationType>)configuration;
-(NSArray *)rowItems;
@end

