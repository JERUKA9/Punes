/* autogenerated file, do not modify! */
/* souce file: apu_channels.glade */
const gchar *apu_channels_glade=
"<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
"<interface>"
"  <requires lib=\"gtk+\" version=\"2.24\"/>"
"  <!-- interface-naming-policy project-wide -->"
"  <object class=\"GtkDialog\" id=\"apu_channels_dialog\">"
"    <property name=\"can_focus\">False</property>"
"    <property name=\"border_width\">5</property>"
"    <property name=\"type_hint\">dialog</property>"
"    <child internal-child=\"vbox\">"
"      <object class=\"GtkVBox\" id=\"apu_channels_dialog_vbox\">"
"        <property name=\"visible\">True</property>"
"        <property name=\"can_focus\">False</property>"
"        <property name=\"spacing\">2</property>"
"        <child>"
"          <object class=\"GtkFrame\" id=\"apu_channels_frame\">"
"            <property name=\"visible\">True</property>"
"            <property name=\"can_focus\">False</property>"
"            <property name=\"label_xalign\">0</property>"
"            <child>"
"              <object class=\"GtkAlignment\" id=\"apu_channels_alignment\">"
"                <property name=\"visible\">True</property>"
"                <property name=\"can_focus\">False</property>"
"                <property name=\"left_padding\">12</property>"
"                <property name=\"right_padding\">4</property>"
"                <child>"
"                  <object class=\"GtkVBox\" id=\"apu_channels_vbox\">"
"                    <property name=\"visible\">True</property>"
"                    <property name=\"can_focus\">False</property>"
"                    <child>"
"                      <object class=\"GtkTable\" id=\"apu_channels_table\">"
"                        <property name=\"visible\">True</property>"
"                        <property name=\"can_focus\">False</property>"
"                        <property name=\"n_rows\">8</property>"
"                        <property name=\"n_columns\">4</property>"
"                        <child>"
"                          <object class=\"GtkFixed\" id=\"apu_channels_des_fixed1\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_des_acrive\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">active</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">1</property>"
"                            <property name=\"right_attach\">2</property>"
"                            <property name=\"x_options\"/>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkFixed\" id=\"apu_channels_des_fixed2\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">2</property>"
"                            <property name=\"right_attach\">3</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                            <property name=\"x_padding\">3</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_des_volume\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">volume</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">3</property>"
"                            <property name=\"right_attach\">4</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_square1_label\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">Square 1</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"top_attach\">2</property>"
"                            <property name=\"bottom_attach\">3</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkCheckButton\" id=\"apu_channels_square1_checkbutton\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">False</property>"
"                            <property name=\"draw_indicator\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">1</property>"
"                            <property name=\"right_attach\">2</property>"
"                            <property name=\"top_attach\">2</property>"
"                            <property name=\"bottom_attach\">3</property>"
"                            <property name=\"x_options\"/>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkVSeparator\" id=\"apu_channels_square1_vseparator\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">2</property>"
"                            <property name=\"right_attach\">3</property>"
"                            <property name=\"top_attach\">2</property>"
"                            <property name=\"bottom_attach\">3</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHScale\" id=\"apu_channels_square1_hscale\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"adjustment\">apu_channels_square1_adjustment</property>"
"                            <property name=\"draw_value\">False</property>"
"                            <property name=\"value_pos\">right</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">3</property>"
"                            <property name=\"right_attach\">4</property>"
"                            <property name=\"top_attach\">2</property>"
"                            <property name=\"bottom_attach\">3</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_square2_label\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">Square 2</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"top_attach\">3</property>"
"                            <property name=\"bottom_attach\">4</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkCheckButton\" id=\"apu_channels_square2_checkbutton\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">False</property>"
"                            <property name=\"draw_indicator\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">1</property>"
"                            <property name=\"right_attach\">2</property>"
"                            <property name=\"top_attach\">3</property>"
"                            <property name=\"bottom_attach\">4</property>"
"                            <property name=\"x_options\"/>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkVSeparator\" id=\"apu_channels_square2_vseparator\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">2</property>"
"                            <property name=\"right_attach\">3</property>"
"                            <property name=\"top_attach\">3</property>"
"                            <property name=\"bottom_attach\">4</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHScale\" id=\"apu_channels_square2_hscale\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"adjustment\">apu_channels_square2_adjustment</property>"
"                            <property name=\"draw_value\">False</property>"
"                            <property name=\"value_pos\">right</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">3</property>"
"                            <property name=\"right_attach\">4</property>"
"                            <property name=\"top_attach\">3</property>"
"                            <property name=\"bottom_attach\">4</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_triangle_label\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">Triangle</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"top_attach\">4</property>"
"                            <property name=\"bottom_attach\">5</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkCheckButton\" id=\"apu_channels_triangle_checkbutton\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">False</property>"
"                            <property name=\"draw_indicator\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">1</property>"
"                            <property name=\"right_attach\">2</property>"
"                            <property name=\"top_attach\">4</property>"
"                            <property name=\"bottom_attach\">5</property>"
"                            <property name=\"x_options\"/>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkVSeparator\" id=\"apu_channels_triangle_vseparator\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">2</property>"
"                            <property name=\"right_attach\">3</property>"
"                            <property name=\"top_attach\">4</property>"
"                            <property name=\"bottom_attach\">5</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHScale\" id=\"apu_channels_triangle_hscale\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"adjustment\">apu_channels_trinagle_adjustment</property>"
"                            <property name=\"draw_value\">False</property>"
"                            <property name=\"value_pos\">right</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">3</property>"
"                            <property name=\"right_attach\">4</property>"
"                            <property name=\"top_attach\">4</property>"
"                            <property name=\"bottom_attach\">5</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_noise_label\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">Noise</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"top_attach\">5</property>"
"                            <property name=\"bottom_attach\">6</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkCheckButton\" id=\"apu_channels_noise_checkbutton\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">False</property>"
"                            <property name=\"draw_indicator\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">1</property>"
"                            <property name=\"right_attach\">2</property>"
"                            <property name=\"top_attach\">5</property>"
"                            <property name=\"bottom_attach\">6</property>"
"                            <property name=\"x_options\"/>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkVSeparator\" id=\"apu_channels_noise_vseparator\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">2</property>"
"                            <property name=\"right_attach\">3</property>"
"                            <property name=\"top_attach\">5</property>"
"                            <property name=\"bottom_attach\">6</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHScale\" id=\"apu_channels_noise_hscale\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"adjustment\">apu_channels_noise_adjustment</property>"
"                            <property name=\"draw_value\">False</property>"
"                            <property name=\"value_pos\">right</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">3</property>"
"                            <property name=\"right_attach\">4</property>"
"                            <property name=\"top_attach\">5</property>"
"                            <property name=\"bottom_attach\">6</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_dmc_label\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">DMC</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"top_attach\">6</property>"
"                            <property name=\"bottom_attach\">7</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkCheckButton\" id=\"apu_channels_dmc_checkbutton\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">False</property>"
"                            <property name=\"draw_indicator\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">1</property>"
"                            <property name=\"right_attach\">2</property>"
"                            <property name=\"top_attach\">6</property>"
"                            <property name=\"bottom_attach\">7</property>"
"                            <property name=\"x_options\"/>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkVSeparator\" id=\"apu_channels_dmc_vseparator\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">2</property>"
"                            <property name=\"right_attach\">3</property>"
"                            <property name=\"top_attach\">6</property>"
"                            <property name=\"bottom_attach\">7</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHScale\" id=\"apu_channels_dmc_hscale\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"adjustment\">apu_channels_dmc_adjustment</property>"
"                            <property name=\"draw_value\">False</property>"
"                            <property name=\"value_pos\">right</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">3</property>"
"                            <property name=\"right_attach\">4</property>"
"                            <property name=\"top_attach\">6</property>"
"                            <property name=\"bottom_attach\">7</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_extra_label\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">Extra</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"top_attach\">7</property>"
"                            <property name=\"bottom_attach\">8</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkCheckButton\" id=\"apu_channels_extra_checkbutton\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">False</property>"
"                            <property name=\"draw_indicator\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">1</property>"
"                            <property name=\"right_attach\">2</property>"
"                            <property name=\"top_attach\">7</property>"
"                            <property name=\"bottom_attach\">8</property>"
"                            <property name=\"x_options\"/>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkVSeparator\" id=\"apu_channels_extra_vseparator\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">2</property>"
"                            <property name=\"right_attach\">3</property>"
"                            <property name=\"top_attach\">7</property>"
"                            <property name=\"bottom_attach\">8</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHScale\" id=\"apu_channels_extra_hscale\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"adjustment\">apu_channels_extra_adjustment</property>"
"                            <property name=\"draw_value\">False</property>"
"                            <property name=\"value_pos\">right</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">3</property>"
"                            <property name=\"right_attach\">4</property>"
"                            <property name=\"top_attach\">7</property>"
"                            <property name=\"bottom_attach\">8</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkLabel\" id=\"apu_channels_master_label\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                            <property name=\"label\" translatable=\"yes\">Master</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"top_attach\">1</property>"
"                            <property name=\"bottom_attach\">2</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkHScale\" id=\"apu_channels_master_hscale\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"adjustment\">apu_channels_master_adjustment</property>"
"                            <property name=\"draw_value\">False</property>"
"                            <property name=\"value_pos\">right</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">3</property>"
"                            <property name=\"right_attach\">4</property>"
"                            <property name=\"top_attach\">1</property>"
"                            <property name=\"bottom_attach\">2</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkFixed\" id=\"apu_channels_master_fixed\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">1</property>"
"                            <property name=\"right_attach\">2</property>"
"                            <property name=\"top_attach\">1</property>"
"                            <property name=\"bottom_attach\">2</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkVSeparator\" id=\"apu_channels_master_vseparator\">"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">False</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"left_attach\">2</property>"
"                            <property name=\"right_attach\">3</property>"
"                            <property name=\"top_attach\">1</property>"
"                            <property name=\"bottom_attach\">2</property>"
"                            <property name=\"x_options\">GTK_FILL</property>"
"                          </packing>"
"                        </child>"
"                      </object>"
"                      <packing>"
"                        <property name=\"expand\">False</property>"
"                        <property name=\"fill\">True</property>"
"                        <property name=\"position\">0</property>"
"                      </packing>"
"                    </child>"
"                    <child>"
"                      <object class=\"GtkHSeparator\" id=\"apu_channels_hseparator\">"
"                        <property name=\"visible\">True</property>"
"                        <property name=\"can_focus\">False</property>"
"                      </object>"
"                      <packing>"
"                        <property name=\"expand\">False</property>"
"                        <property name=\"fill\">True</property>"
"                        <property name=\"padding\">6</property>"
"                        <property name=\"position\">1</property>"
"                      </packing>"
"                    </child>"
"                    <child>"
"                      <object class=\"GtkHBox\" id=\"apu_channels_buttons_hbox\">"
"                        <property name=\"visible\">True</property>"
"                        <property name=\"can_focus\">False</property>"
"                        <property name=\"homogeneous\">True</property>"
"                        <child>"
"                          <object class=\"GtkButton\" id=\"apu_channels_active_all_button\">"
"                            <property name=\"label\" translatable=\"yes\">Active all</property>"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"expand\">True</property>"
"                            <property name=\"fill\">True</property>"
"                            <property name=\"position\">0</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkButton\" id=\"apu_channels_disable_all_button\">"
"                            <property name=\"label\" translatable=\"yes\">Disable all</property>"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"expand\">True</property>"
"                            <property name=\"fill\">True</property>"
"                            <property name=\"position\">1</property>"
"                          </packing>"
"                        </child>"
"                        <child>"
"                          <object class=\"GtkButton\" id=\"apu_channels_defaults_button\">"
"                            <property name=\"label\" translatable=\"yes\">Defaults</property>"
"                            <property name=\"visible\">True</property>"
"                            <property name=\"can_focus\">True</property>"
"                            <property name=\"receives_default\">True</property>"
"                          </object>"
"                          <packing>"
"                            <property name=\"expand\">True</property>"
"                            <property name=\"fill\">True</property>"
"                            <property name=\"position\">2</property>"
"                          </packing>"
"                        </child>"
"                      </object>"
"                      <packing>"
"                        <property name=\"expand\">False</property>"
"                        <property name=\"fill\">False</property>"
"                        <property name=\"position\">2</property>"
"                      </packing>"
"                    </child>"
"                  </object>"
"                </child>"
"              </object>"
"            </child>"
"            <child type=\"label\">"
"              <object class=\"GtkLabel\" id=\"apu_channels_frame_label\">"
"                <property name=\"visible\">True</property>"
"                <property name=\"can_focus\">False</property>"
"                <property name=\"xalign\">0.47999998927116394</property>"
"                <property name=\"label\" translatable=\"yes\">&lt;b&gt;APU Channels&lt;/b&gt;</property>"
"                <property name=\"use_markup\">True</property>"
"              </object>"
"            </child>"
"          </object>"
"          <packing>"
"            <property name=\"expand\">True</property>"
"            <property name=\"fill\">True</property>"
"            <property name=\"position\">0</property>"
"          </packing>"
"        </child>"
"        <child internal-child=\"action_area\">"
"          <object class=\"GtkHButtonBox\" id=\"apu_channels_dialog-action_area\">"
"            <property name=\"visible\">True</property>"
"            <property name=\"can_focus\">False</property>"
"            <property name=\"layout_style\">end</property>"
"            <child>"
"              <object class=\"GtkButton\" id=\"apu_channels_ok_button\">"
"                <property name=\"label\">gtk-ok</property>"
"                <property name=\"visible\">True</property>"
"                <property name=\"can_focus\">True</property>"
"                <property name=\"receives_default\">True</property>"
"                <property name=\"use_stock\">True</property>"
"              </object>"
"              <packing>"
"                <property name=\"expand\">False</property>"
"                <property name=\"fill\">False</property>"
"                <property name=\"position\">0</property>"
"              </packing>"
"            </child>"
"            <child>"
"              <object class=\"GtkButton\" id=\"apu_channels_cancel_button\">"
"                <property name=\"label\">gtk-undo</property>"
"                <property name=\"visible\">True</property>"
"                <property name=\"can_focus\">True</property>"
"                <property name=\"receives_default\">True</property>"
"                <property name=\"use_stock\">True</property>"
"              </object>"
"              <packing>"
"                <property name=\"expand\">False</property>"
"                <property name=\"fill\">False</property>"
"                <property name=\"position\">1</property>"
"              </packing>"
"            </child>"
"          </object>"
"          <packing>"
"            <property name=\"expand\">True</property>"
"            <property name=\"fill\">True</property>"
"            <property name=\"position\">1</property>"
"          </packing>"
"        </child>"
"      </object>"
"    </child>"
"    <action-widgets>"
"      <action-widget response=\"0\">apu_channels_ok_button</action-widget>"
"      <action-widget response=\"0\">apu_channels_cancel_button</action-widget>"
"    </action-widgets>"
"  </object>"
"  <object class=\"GtkAdjustment\" id=\"apu_channels_dmc_adjustment\">"
"    <property name=\"upper\">1</property>"
"    <property name=\"step_increment\">0.050000000000000003</property>"
"    <property name=\"page_increment\">1</property>"
"  </object>"
"  <object class=\"GtkAdjustment\" id=\"apu_channels_extra_adjustment\">"
"    <property name=\"upper\">1</property>"
"    <property name=\"step_increment\">0.050000000000000003</property>"
"    <property name=\"page_increment\">1</property>"
"  </object>"
"  <object class=\"GtkAdjustment\" id=\"apu_channels_master_adjustment\">"
"    <property name=\"upper\">1</property>"
"    <property name=\"step_increment\">0.050000000000000003</property>"
"    <property name=\"page_increment\">1</property>"
"  </object>"
"  <object class=\"GtkAdjustment\" id=\"apu_channels_noise_adjustment\">"
"    <property name=\"upper\">1</property>"
"    <property name=\"step_increment\">0.050000000000000003</property>"
"    <property name=\"page_increment\">1</property>"
"  </object>"
"  <object class=\"GtkAdjustment\" id=\"apu_channels_square1_adjustment\">"
"    <property name=\"upper\">1</property>"
"    <property name=\"step_increment\">0.050000000000000003</property>"
"    <property name=\"page_increment\">1</property>"
"  </object>"
"  <object class=\"GtkAdjustment\" id=\"apu_channels_square2_adjustment\">"
"    <property name=\"upper\">1</property>"
"    <property name=\"step_increment\">0.050000000000000003</property>"
"    <property name=\"page_increment\">1</property>"
"  </object>"
"  <object class=\"GtkAdjustment\" id=\"apu_channels_trinagle_adjustment\">"
"    <property name=\"upper\">1</property>"
"    <property name=\"step_increment\">0.050000000000000003</property>"
"    <property name=\"page_increment\">1</property>"
"  </object>"
"</interface>"
;
