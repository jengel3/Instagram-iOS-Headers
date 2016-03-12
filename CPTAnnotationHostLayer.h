
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class NSMutableArray, NSArray;

@interface CPTAnnotationHostLayer : CPTLayer {

	NSMutableArray* mutableAnnotations;

}

@property (nonatomic,readonly) NSArray * annotations; 
@property (nonatomic,retain) NSMutableArray * mutableAnnotations; 
-(NSMutableArray *)mutableAnnotations;
-(id)sublayersExcludedFromAutomaticLayout;
-(char)pointingDeviceDraggedEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceCancelledEvent:(UIEvent*)arg1 ;
-(void)setMutableAnnotations:(NSMutableArray *)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(NSArray *)annotations;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)removeAllAnnotations;
@end

