

@protocol IGFeedItemConfigurationType;
@class IGFeedItem, NSArray;

@interface IGFeedItemTimelineViewModel : NSObject {

	IGFeedItem* _feedItem;
	id<IGFeedItemConfigurationType> _configuration;
	NSArray* _textRowItems;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                      //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSArray * textRowItems;                                       //@synthesize textRowItems=_textRowItems - In the implementation block
-(IGFeedItem *)feedItem;
-(int)feedItemCellTypeForRow:(int)arg1 ;
-(id)initWithFeedItem:(id)arg1 configuration:(id)arg2 ;
-(id)commentForTextTimelineRow:(int)arg1 ;
-(int)cellTypeForTextTimelineRow:(int)arg1 ;
-(int)numberOfFeedCellsBeforeComments;
-(int)numberOfTextRowsInTimeline;
-(char)shouldShowTimestamp;
-(char)shouldShowPivotGrid;
-(NSArray *)textRowItems;
-(int)totalNumberOfRows;
-(void)setTextRowItems:(NSArray *)arg1 ;
-(id<IGFeedItemConfigurationType>)configuration;
@end

