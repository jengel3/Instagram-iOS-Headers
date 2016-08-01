
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoRendererDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface IGVideoRenderQueue : NSObject <IGVideoRendererDelegate, IGUserSessionClearableObject> {

	NSMutableDictionary* _metadataRendererMap;
	NSMutableArray* _renderQueue;
	NSMutableArray* _hibernaculum;

}

@property (nonatomic,retain) NSMutableDictionary * metadataRendererMap;              //@synthesize metadataRendererMap=_metadataRendererMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * renderQueue;                           //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * hibernaculum;                          //@synthesize hibernaculum=_hibernaculum - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)sharedRenderQueue;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)cancelRenderWithMetadata:(id)arg1 ;
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(CGSize)arg3 canceled:(char)arg4 ;
-(void)setRenderQueue:(NSMutableArray *)arg1 ;
-(id)renderVideo:(id)arg1 withMetadata:(id)arg2 ;
-(void)saveRenderWithMetadataWhenDone:(id)arg1 ;
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)onAppBackground;
-(void)onAppForeground;
-(id)rendererWithMetadata:(id)arg1 ;
-(id)createRendererWithVideo:(id)arg1 mediaMetadata:(id)arg2 ;
-(void)processRenderQueue;
-(void)enqueueRenderer:(id)arg1 ;
-(void)removeRendererFromRenderQueue:(id)arg1 ;
-(void)saveRenderToPhotoLibrary:(id)arg1 ;
-(void)cancelAllRenderings;
-(NSMutableDictionary *)metadataRendererMap;
-(void)setMetadataRendererMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)hibernaculum;
-(void)setHibernaculum:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSMutableArray *)renderQueue;
@end

