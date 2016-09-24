/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKActivityDigitalFaceView : NTKFaceView <NTKActivityFaceViewFactoryDelegate> {
    double  _blinkerAndSecondsWidth;
    UILabel * _briskMinutesLabel;
    struct RingLayout { 
        double bottomEdgeInset; 
        double leftEdgeInset; 
        double diameter; 
        double thickness; 
        double interspacing; 
    }  _currentRingLayout;
    NTKPolygonCylinderView * _densityEditingPolygonView;
    UILabel * _energyLabel;
    NTKActivityFaceViewFactory * _faceViewFactory;
    double  _lastBriskPercentage;
    double  _lastEnergyPercentage;
    double  _lastSedentaryPercentage;
    double  _rightTimeViewInset;
    HKRingsView * _ringsView;
    BOOL  _showSeconds;
    UILabel * _standHoursLabel;
    NTKActivityFaceControl * _tapToLaunchButton;
    NSDate * _timeDensityEditingOverrideDate;
    UIView * _timeLabelBackgroundView;
    BOOL  _useTimeTravelStyleForTimeLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) double rightTimeViewInset;
@property (nonatomic) BOOL showSeconds;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKDigitalTimeLabel *timeView;
@property (nonatomic) BOOL useTimeTravelStyleForTimeLabel;

+ (id)_additionalPrelaunchApplicationIdentifiers;
+ (id)_newRingsView;
+ (void)_prewarm;
+ (id)_swatchColorForColorOption:(id)arg1;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyCurrentEntryModelByFraction:(float)arg1 updateLabels:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_applyCurrentRingLayout;
- (void)_applyEntryModel:(id)arg1 byFraction:(float)arg2 updateLabels:(BOOL)arg3 animated:(BOOL)arg4;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (float)_blinkerAndSecondsWidth;
- (void)_cleanUpAfterDetailEditing;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForDetailEditing;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_enumerateActivityLabels:(id /* block */)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_launchButtonPressed:(id)arg1;
- (void)_layoutForegroundContainerView;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (int)_polygonIndexForAccuracy:(unsigned int)arg1;
- (void)_prepareForEditing;
- (void)_prepareWristRaiseAnimation;
- (void)_recenterTimeView;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (float)_rightTimeViewInsetForEditMode:(int)arg1;
- (float)_ringAlphaForEditMode:(int)arg1;
- (struct CGPoint { double x1; double x2; })_ringCenterForLayout:(struct RingLayout { double x1; double x2; double x3; double x4; double x5; })arg1;
- (id)_ringGroupController;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setActivityViewsAlpha:(float)arg1 animated:(BOOL)arg2;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)_supportsTimeScrubbing;
- (float)_timeAlphaForEditMode:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_timeViewBackgroundRect;
- (void)_unloadSnapshotContentViews;
- (void)_updateCurrentRingLayoutIfNecessary;
- (void)_updateTimeViewSecondsDisplayState;
- (BOOL)_wantsTimeTravelStatusModule;
- (void)applyEntryModel:(id)arg1 animated:(BOOL)arg2;
- (void)applyEntryModelWithUnfilledRings:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)rightTimeViewInset;
- (void)setDataMode:(int)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setRightTimeViewInset:(float)arg1;
- (void)setShowSeconds:(BOOL)arg1;
- (void)setUseTimeTravelStyleForTimeLabel:(BOOL)arg1;
- (BOOL)showSeconds;
- (void)timeTravelDateEnteredOrExitedTimelineBounds:(BOOL)arg1;
- (BOOL)useTimeTravelStyleForTimeLabel;

@end