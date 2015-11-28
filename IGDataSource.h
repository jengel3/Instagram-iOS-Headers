

@protocol OS_dispatch_queue;
@class IGDataSourceState, NSObject, IGAnnouncer;

@interface IGDataSource : NSObject {

	IGDataSourceState* _state;
	unsigned _sectionCount;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _changeAnnouncementQueue;
	IGAnnouncer* _changeAnnouncer;

}

@property (nonatomic,retain) IGDataSourceState * state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned sectionCount;                                             //@synthesize sectionCount=_sectionCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> changeAnnouncementQueue;              //@synthesize changeAnnouncementQueue=_changeAnnouncementQueue - In the implementation block
@property (nonatomic,readonly) IGAnnouncer * changeAnnouncer;                                     //@synthesize changeAnnouncer=_changeAnnouncer - In the implementation block
-(id)initWithSectionCount:(unsigned)arg1 changeQueue:(id)arg2 ;
-(id)stateFromSections:(id)arg1 mergeObjectSections:(id)arg2 mergeType:(unsigned)arg3 ;
-(void)announceChangeToState:(id)arg1 changeset:(id)arg2 mergeType:(unsigned)arg3 ;
-(id)sectionByUpdatingOldSection:(id)arg1 withObjects:(id)arg2 sectionKey:(id)arg3 mergeType:(unsigned)arg4 ;
-(NSObject*<OS_dispatch_queue>)changeAnnouncementQueue;
-(IGAnnouncer *)changeAnnouncer;
-(id)initWithSectionCount:(unsigned)arg1 ;
-(id)initBackgroundChangesWithSectionCount:(unsigned)arg1 ;
-(void)updateSections:(id)arg1 withMergeType:(unsigned)arg2 ;
-(void)updateObjects:(id)arg1 inSection:(unsigned)arg2 withMergeType:(unsigned)arg3 ;
-(void)logChangesetCompletedAfterStart:(double)arg1 mergeType:(unsigned)arg2 changeset:(id)arg3 ;
-(void)addChangeListener:(id)arg1 ;
-(void)removeChangeListener:(id)arg1 ;
-(IGDataSourceState *)state;
-(void)setState:(IGDataSourceState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(unsigned)sectionCount;
@end

