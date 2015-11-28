

#import <Instagram/Instagram-Structs.h>
@class NSMutableArray;

@interface IGAsset : NSObject {

	char _opaque;
	NSMutableArray* _components;
	CGSize _size;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) char opaque;                              //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,retain) NSMutableArray * components;              //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
+(void)setAssetsDirectoryPath:(id)arg1 ;
+(void)removeAllAssetsWithDeletionBlock:(/*^block*/id)arg1 ;
+(id)assetNamed:(id)arg1 transform:(CGAffineTransform)arg2 creationBlock:(/*^block*/id)arg3 ;
+(id)drawQueue;
-(void)addPath:(/*function pointer*/void*)arg1 atPoint:(CGPoint)arg2 styles:(/*function pointer*/void*)arg3 ;
-(void)addPath:(/*function pointer*/void*)arg1 atPoint:(CGPoint)arg2 styleList:(/*function pointer*/void**)arg3 ;
-(id)renderAtScale:(float)arg1 ;
-(void)addPath:(/*function pointer*/void*)arg1 atPoint:(CGPoint)arg2 styleSet:(id)arg3 ;
-(void)setOpaque:(char)arg1 ;
-(CGSize)size;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGAffineTransform)transform;
-(char)opaque;
-(NSMutableArray *)components;
-(void)setComponents:(NSMutableArray *)arg1 ;
@end

