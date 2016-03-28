
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGVideoRendererDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableArray, NSString;

@interface IGVideoRenderQueue : NSObject <IGVideoRendererDelegate, IGUserSessionClearableObject> {

	NSMutableArray* _renderQueue;
	NSMutableArray* _hibernaculum;

}

@property (nonatomic,retain) NSMutableArray * renderQueue;               //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * hibernaculum;              //@synthesize hibernaculum=_hibernaculum - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)sharedRenderQueue;
-(void)renderVideo:(id)arg1 withMetadata:(id)arg2 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)setRenderQueue:(NSMutableArray *)arg1 ;
-(void)cancelRenderWithMetadata:(id)arg1 ;
-(void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(CGSize)arg3 metadata:(id)arg4 canceled:(char)arg5 ;
-(void)videoRenderer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)saveRenderWithMetadataWhenDone:(id)arg1 ;
-(void)onAppBackground;
-(void)onAppForeground;
-(void)renderVideo:(id)arg1 withMetadata:(id)arg2 retryCount:(unsigned)arg3 ;
-(id)rendererWithMetadata:(id)arg1 ;
-(id)createRendererWithVideo:(id)arg1 ;
-(void)removeRendererFromRenderQueue:(id)arg1 ;
-(void)saveRenderToPhotoLibrary:(id)arg1 ;
-(void)setHibernaculum:(NSMutableArray *)arg1 ;
-(void)cancelAllRenderings;
-(NSMutableArray *)hibernaculum;
-(void)dealloc;
-(id)init;
-(NSMutableArray *)renderQueue;
@end

