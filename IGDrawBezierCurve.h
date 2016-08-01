

@class IGDrawPoint;

@interface IGDrawBezierCurve : NSObject {

	unsigned _numPoints;
	IGDrawPoint* _lastPoint;
	IGDrawPoint* _lastCtrl1;
	IGDrawPoint* _lastCtrl2;
	IGDrawPoint* _lastAnchor;
	IGDrawPoint* _start;
	IGDrawPoint* _end;

}

@property (nonatomic,readonly) IGDrawPoint * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) IGDrawPoint * end;                //@synthesize end=_end - In the implementation block
-(void)dealloc;
-(IGDrawPoint *)start;
-(IGDrawPoint *)end;
-(void)addPoint:(id)arg1 ;
@end

