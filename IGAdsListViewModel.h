

#import <Instagram/Instagram-Structs.h>
@class NSArray;

@interface IGAdsListViewModel : NSObject {

	NSArray* _pendingAds;
	NSArray* _activeAds;
	NSArray* _endedAds;

}

@property (nonatomic,copy,readonly) NSArray * pendingAds;              //@synthesize pendingAds=_pendingAds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeAds;               //@synthesize activeAds=_activeAds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * endedAds;                //@synthesize endedAds=_endedAds - In the implementation block
-(id)initWithPendingAds:(NSArray*)arg1 activeAds:(NSArray*)arg2 endedAds:(NSArray*)arg3 ;
-(char)isEmptyViewmodel;
-(NSArray *)pendingAds;
-(NSArray *)activeAds;
-(NSArray *)endedAds;
-(id)adForMediaID:(id)arg1 ;
@end

