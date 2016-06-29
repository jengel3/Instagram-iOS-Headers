

@interface IGDirectThreadMerger : NSObject
-(char)shouldMergeFromThread:(id)arg1 intoThread:(id)arg2 ;
-(void)mergePublishedContentFromThread:(id)arg1 intoThread:(id)arg2 ;
-(void)mergeLastSeenFromThread:(id)arg1 intoThread:(id)arg2 ;
-(void)mergeLastActivityDateFromThread:(id)arg1 intoThread:(id)arg2 ;
-(void)updateCursorForOldThread:(id)arg1 intoThread:(id)arg2 ;
-(id)threadByCombiningDataFromThread:(id)arg1 intoThread:(id)arg2 alwaysMerge:(char)arg3 ;
@end

