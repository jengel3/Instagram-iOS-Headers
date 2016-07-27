

@interface IGDirectThreadMerger : NSObject
-(id)threadByCombiningDataFromThread:(id)arg1 intoThread:(id)arg2 alwaysMerge:(char)arg3 ;
-(char)shouldMergeFromThread:(id)arg1 intoThread:(id)arg2 ;
-(id)mergedPublishedMessagesFromThread:(id)arg1 intoThread:(id)arg2 ;
-(id)oldestCursorForOldThread:(id)arg1 intoThread:(id)arg2 ;
-(id)newestCursorFromOldThread:(id)arg1 intoThread:(id)arg2 ;
-(id)mergedPendingMessagesFromThread:(id)arg1 intoThread:(id)arg2 ;
-(id)mergedLastSeenAtForUserIdsFromThread:(id)arg1 intoThread:(id)arg2 ;
-(id)mergedLastSeenAtForItemIdsFromThread:(id)arg1 intoThread:(id)arg2 ;
-(id)mergedLastActivityDateFromThread:(id)arg1 intoThread:(id)arg2 ;
@end

