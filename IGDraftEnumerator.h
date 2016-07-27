
#import <CoreFoundation/NSEnumerator.h>

@class NSURL, NSMutableDictionary, NSOrderedSet, NSEnumerator;

@interface IGDraftEnumerator : NSEnumerator {

	NSURL* _baseURL;
	/*^block*/id _draftFilterBlock;
	NSMutableDictionary* _filteredDraftCache;
	NSOrderedSet* _sortedFileURLs;
	NSEnumerator* _fileURLEnumerator;

}
+(id)sortedFileURLsAtBaseURL:(id)arg1 ;
+(id)sortedFileURLSetFromArray:(id)arg1 ;
-(id)metadataAtFileURL:(id)arg1 ;
-(void)removeDraftAtFileURL:(id)arg1 ;
-(id)initWithBaseURL:(id)arg1 filter:(/*^block*/id)arg2 ;
-(void)addDraftAtFileURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(int)estimatedTotalCount;
-(id)allObjects;
-(void)reset;
-(id)nextObject;
@end

