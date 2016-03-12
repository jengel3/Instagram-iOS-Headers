
#import <Instagram/IGNetworkParser.h>

@class NSString, IGFeedItemStore;

@interface IGEventFeedParser : NSObject <IGNetworkParser> {

	NSString* _eventId;
	IGFeedItemStore* _feedItemStore;

}

@property (nonatomic,copy,readonly) NSString * eventId;                    //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,retain) IGFeedItemStore * feedItemStore;              //@synthesize feedItemStore=_feedItemStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEventId:(id)arg1 ;
-(id)initWithEventId:(id)arg1 feedItemStore:(id)arg2 ;
-(IGFeedItemStore *)feedItemStore;
-(id)parseDataFromResponse:(id)arg1 ;
-(id)parsingQueue;
-(id)parsedObjectFromResponse:(id)arg1 ;
-(void)setFeedItemStore:(IGFeedItemStore *)arg1 ;
-(NSString *)eventId;
@end

