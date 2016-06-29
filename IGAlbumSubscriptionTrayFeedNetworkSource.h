
#import <Instagram/IGFeedNetworkSource.h>
#import <Instagram/IGFeedNetworkSourceSerializable.h>

@class NSString;

@interface IGAlbumSubscriptionTrayFeedNetworkSource : IGFeedNetworkSource <IGFeedNetworkSourceSerializable> {

	NSString* _userPKAtTimeOfInstantiation;

}

@property (nonatomic,copy,readonly) NSString * userPKAtTimeOfInstantiation;              //@synthesize userPKAtTimeOfInstantiation=_userPKAtTimeOfInstantiation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 ;
-(id)regularPostsFromResponse:(id)arg1 clearOut:(char)arg2 usingStore:(id)arg3 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(id)serializedDataFilePath;
-(void)deserializeEntriesAtPath:(id)arg1 ;
-(void)serializeData;
-(void)deserializeData;
-(NSString *)userPKAtTimeOfInstantiation;
-(void)archiveToFile:(id)arg1 ;
-(void)dealloc;
@end

