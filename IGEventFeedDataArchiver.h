

@class NSString, IGFileCoordinator;

@interface IGEventFeedDataArchiver : NSObject {

	NSString* _eventId;
	IGFileCoordinator* _fileCoordinator;

}

@property (nonatomic,copy,readonly) NSString * eventId;                        //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,retain) IGFileCoordinator * fileCoordinator;              //@synthesize fileCoordinator=_fileCoordinator - In the implementation block
-(IGFileCoordinator *)fileCoordinator;
-(void)setFileCoordinator:(IGFileCoordinator *)arg1 ;
-(id)initWithEventId:(id)arg1 ;
-(id)unarchiveEventFeedData;
-(char)archiveEventFeedData:(id)arg1 ;
-(NSString *)eventId;
@end

