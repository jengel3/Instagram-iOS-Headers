
#import <Instagram/IGFeedNetworkSource.h>
#import <Instagram/IGFeedNetworkSourceSerializable.h>

@class NSString;

@interface IGAlbumSubscriptionTrayFeedNetworkSource : IGFeedNetworkSource <IGFeedNetworkSourceSerializable>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 userSession:(id)arg3 ;
-(id)regularPostsFromResponse:(id)arg1 clearOut:(char)arg2 usingStore:(id)arg3 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(id)serializedDataFilePath;
-(void)deserializeEntriesAtPath:(id)arg1 ;
-(void)serializeData;
-(void)deserializeData;
-(void)archiveToFile:(id)arg1 ;
-(void)dealloc;
@end

